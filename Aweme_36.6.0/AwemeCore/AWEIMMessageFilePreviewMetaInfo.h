@class NSString, NSArray;

@interface AWEIMMessageFilePreviewMetaInfo : NSObject

@property (readonly, nonatomic) BOOL banned;
@property (readonly, nonatomic) BOOL fileExpired;
@property (nonatomic) BOOL URLExpired;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) long long urlExpireTimeInSec;
@property (nonatomic) long long fileExpireTimeInSec;
@property (nonatomic) long long fileStatus;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
