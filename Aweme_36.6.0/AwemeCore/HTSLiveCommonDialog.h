@class NSString, NSMutableDictionary, HTSLiveImage, NSMutableArray;

@interface HTSLiveCommonDialog : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *subTitleArray;
@property (readonly, nonatomic) unsigned long long subTitleArray_Count;
@property (retain, nonatomic) NSMutableArray *agreeArray;
@property (readonly, nonatomic) unsigned long long agreeArray_Count;
@property (retain, nonatomic) NSMutableArray *entranceArray;
@property (readonly, nonatomic) unsigned long long entranceArray_Count;
@property (nonatomic) int displayType;
@property (retain, nonatomic) NSMutableArray *buttonListArray;
@property (readonly, nonatomic) unsigned long long buttonListArray_Count;
@property (retain, nonatomic) NSMutableArray *tipsArray;
@property (readonly, nonatomic) unsigned long long tipsArray_Count;
@property (nonatomic) BOOL hasCloseButton;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (nonatomic) int operationType;

+ (id)descriptor;

@end
