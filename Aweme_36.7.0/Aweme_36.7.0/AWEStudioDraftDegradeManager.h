@class NSString;

@interface AWEStudioDraftDegradeManager : NSObject <AWEStudioDraftDegradeManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tryDegradeRecover:(id)a0 completion:(id /* block */)a1;
+ (void)tryNextStrategy:(unsigned long long)a0 strategies:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
+ (id)strategies;


@end
