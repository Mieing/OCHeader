@class NSString;

@interface AWEPigeonRelationImpl : NSObject <AWEIronManPigeonProtocol>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pigeonMethodName;
+ (id)create;

@end
