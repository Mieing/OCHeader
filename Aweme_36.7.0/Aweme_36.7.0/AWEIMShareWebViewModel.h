@class NSString, NSDictionary;

@interface AWEIMShareWebViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *linkURLV2;
@property (copy, nonatomic) NSString *linkURLV2Version;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *webviewType;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *activitySlogan;
@property (copy, nonatomic) NSString *bigPicUrl;
@property (copy, nonatomic) NSString *smallIconUrl;
@property (copy, nonatomic) NSString *hint;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *msgTrack;
@property (copy, nonatomic) NSString *uiExtra;
@property (copy, nonatomic) NSString *bgURL;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (nonatomic) BOOL disableForward;
@property (retain, nonatomic) NSDictionary *syncedExt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
