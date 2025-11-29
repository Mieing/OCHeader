@class NSString;

@interface AWEPackIMUserBizInfoAssembler : NSObject <AWEPackIMUserAssembler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)assemble:(id)a0 material:(id)a1;
+ (id)assemblerID;


@end
