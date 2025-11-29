@class NSString;

@interface LSIMAlertAction : NSObject <LSIMAlertActionProtocol>

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ click;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithStyle:(long long)a0 title:(id)a1 click:(id /* block */)a2;

- (void).cxx_destruct;

@end
