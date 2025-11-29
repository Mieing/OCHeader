@class NSString, AWEECProjectPublishToStoryController, AWEShareGoodsModel;
@protocol ACCPublishServiceProtocol;

@interface AWEECProjectPublishToStoryHelper : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) AWEECProjectPublishToStoryController *postDataController;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (retain, nonatomic) AWEShareGoodsModel *goodsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
