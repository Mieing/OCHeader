@class UIColor, NSString, AWETextStickerReadModel, NSDictionary, UIView, NSNumber;

@interface ACCEditTextReaderConfig : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textKey;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *textStickerId;
@property (copy, nonatomic) NSString *effectID;
@property (retain, nonatomic) AWETextStickerReadModel *readModel;
@property (nonatomic) long long textSource;
@property (nonatomic) unsigned long long fromTag;
@property (nonatomic) unsigned long long openType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetDuration;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) BOOL conflictKeyboard;
@property (nonatomic) double preferPanelHeight;
@property (retain, nonatomic) UIColor *preferFavoriteButtonColor;
@property (nonatomic) BOOL enableTimestamp;
@property (copy, nonatomic) id /* block */ didSelectTextReader;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSNumber *speedRate;

+ (id)textType:(long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
