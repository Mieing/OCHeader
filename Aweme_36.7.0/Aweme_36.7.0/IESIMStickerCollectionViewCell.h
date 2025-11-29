@class NSString;
@protocol IESIMCollectionViewCellLoadTask;

@interface IESIMStickerCollectionViewCell : AWEIMEmoticonFullImageCollectionViewCell <IESIMCollectionViewCellFirstFrameProtocol>

@property (weak, nonatomic) id<IESIMCollectionViewCellLoadTask> loadTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createComponent;
- (void)markCompletion;
- (void).cxx_destruct;

@end
