@class UIColor, NSArray, NSDictionary, AWEMusicModel, NSString, CKGenericTemplateModel;

@interface AWEStudio25StoryMusicResourceModel : NSObject

@property (retain, nonatomic) AWEMusicModel *music;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSArray *lyricInfoList;
@property (copy, nonatomic) NSString *musicCoverPath;
@property (retain, nonatomic) UIColor *musicCoverMainColor;
@property (retain, nonatomic) UIColor *musicCoverTopColor;
@property (retain, nonatomic) UIColor *musicCoverBottomColor;
@property (retain, nonatomic) NSArray *templateModelList;
@property (retain, nonatomic) CKGenericTemplateModel *applyTemplateModel;
@property (nonatomic) BOOL autoRecognizeLyric;
@property (nonatomic) long long lyricSource;

- (void).cxx_destruct;

@end
