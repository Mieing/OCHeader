@class UIImage, NSArray, NSString, HTSEventContext, HTSLiveAudioBGData, NSNumber, IESLiveAudioBackgroundViewModel;

@interface IESLiveAudioThemeCellViewModel : NSObject

@property (nonatomic) BOOL backgroundMaskViewHidden;
@property (nonatomic) BOOL borderViewHidden;
@property (nonatomic) BOOL deleteButtonHidden;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL selected;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *thumbnailImage;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *eventPage;
@property (copy, nonatomic) NSString *imageURI;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveAudioBGData *model;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *templateID;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *statusString;
@property (nonatomic) BOOL statusLabelHidden;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *backgroundViewModel;
@property (readonly, nonatomic) UIImage *ugcImage;
@property (readonly, nonatomic) BOOL isStrongInsertBg;
@property (readonly, nonatomic) BOOL isTimeLimit;
@property (readonly, copy, nonatomic) NSString *titleTag;

- (void)didSetAttachingDIContext;
- (void)didSelect:(BOOL)a0;
- (id)initWithModel:(id)a0 roomID:(id)a1 anchorID:(id)a2 eventPage:(id)a3 trackContext:(id)a4;
- (void)didDeselect;
- (void)didSelectUGCImage;
- (void).cxx_destruct;
- (void)setup;
- (id)eventParams;

@end
