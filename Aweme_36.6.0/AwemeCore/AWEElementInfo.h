@class NSString;

@interface AWEElementInfo : NSObject <AWEElementInfoProtocol>

@property (nonatomic) long long identifier;
@property (retain, nonatomic) Class elementClass;
@property (retain, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
