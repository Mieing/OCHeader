@class NSString;

@interface MegaVideoCollectionModelCpp : MegaVideoFeedFlowModelCpp <MegaVideoCollectionModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowCollection:(id)a0;
+ (unsigned long long)collectionId:(id)a0;
+ (id)createModel:(id)a0 commentScene:(int)a1;


@end
