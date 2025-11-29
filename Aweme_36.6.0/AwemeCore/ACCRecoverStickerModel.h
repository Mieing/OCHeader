@class NSString, NLETrackSlot_OC, AWEInteractionStickerModel;

@interface ACCRecoverStickerModel : NSObject

@property (retain, nonatomic) NSString *templateStickerId;
@property (retain, nonatomic) id infoSticker;
@property (retain, nonatomic) AWEInteractionStickerModel *interactionSticker;
@property (retain, nonatomic) NLETrackSlot_OC *AIMattingSlot;
@property (nonatomic) long long sourceType;

- (void).cxx_destruct;

@end
