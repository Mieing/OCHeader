@class NSString, NSMutableDictionary, HTSLiveImage, PageInfoBar;

@interface PageInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *schemeURL;
@property (retain, nonatomic) HTSLiveImage *titleImg;
@property (nonatomic) BOOL hasTitleImg;
@property (retain, nonatomic) HTSLiveImage *backgroundImg;
@property (nonatomic) BOOL hasBackgroundImg;
@property (retain, nonatomic) HTSLiveImage *iconImg;
@property (nonatomic) BOOL hasIconImg;
@property (retain, nonatomic) PageInfoBar *bar;
@property (nonatomic) BOOL hasBar;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
