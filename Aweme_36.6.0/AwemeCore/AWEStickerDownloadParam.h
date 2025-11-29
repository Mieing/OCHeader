@class IESEffectModel;

@interface AWEStickerDownloadParam : NSObject

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ didFirstAddListBlock;

- (void).cxx_destruct;

@end
