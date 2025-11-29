@class NSString, NSArray, AppMessageBigPicViewStyle;

@interface BizAppReaderMessageBigPicViewModel : NSObject

@property (copy, nonatomic) NSString *articleURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long bigPicType;
@property (nonatomic) struct CGSize { double width; double height; } bigPicSize;
@property (nonatomic) unsigned long long picCount;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) struct CGSize { double width; double height; } coverOriginSize;
@property (copy, nonatomic) NSArray *titleLabelStyles;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (readonly, copy, nonatomic) NSString *coverImageUrl;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) AppMessageBigPicViewStyle *viewStyle;
@property (nonatomic) BOOL isLongPic;
@property (nonatomic) BOOL showFinderContactIcon;
@property (copy, nonatomic) NSString *sourceUsrname;
@property (copy, nonatomic) NSString *sourceNickname;
@property (nonatomic) BOOL SnsCardStyleOptimization;

+ (BOOL)supportVideoBigPicStyle;
+ (BOOL)isValidShareItem:(id)a0;

- (id)initWithShareItem:(id)a0 title:(id)a1 sourceUsrname:(id)a2 sourceNickname:(id)a3 articleURL:(id)a4 viewStyle:(id)a5;
- (void)refreshLayout;
- (void)onCoverImageReady:(id)a0;
- (void).cxx_destruct;

@end
