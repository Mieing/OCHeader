@class NSString;

@interface AFDAlertAction : NSObject <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enablesButtonAutomatically;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
