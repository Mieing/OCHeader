@class NSString, MyWCDB, WCLocationInfo, NSDate, NSMutableArray, SnsObject;

@interface SEWCUploadTask : NSObject <NSCoding> {
    NSMutableArray *sharedGroupIDS;
}

@property (retain, nonatomic) MyWCDB *wcdb;
@property (retain, nonatomic) NSString *serverID;
@property (retain, nonatomic) NSString *clientID;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *sharedGroupIDs;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *blackUserList;
@property (retain, nonatomic) NSMutableArray *withUserList;
@property (retain, nonatomic) NSMutableArray *mediaList;
@property (retain, nonatomic) SnsObject *snsObj;
@property (retain, nonatomic) NSString *contentDesc;
@property (nonatomic) long long contentDescShowType;
@property (nonatomic) long long contentDescScene;
@property (nonatomic) BOOL isSyncToWeibo;
@property (nonatomic) BOOL isSyncToFacebook;
@property (nonatomic) BOOL isSyncToTwitter;
@property (nonatomic) BOOL isSyncToQZone;
@property (retain, nonatomic) NSString *linkUrl;
@property (retain, nonatomic) NSDate *createTime;
@property (nonatomic) long long uploadResult;
@property (nonatomic) long long BGImgSetType;
@property (nonatomic) BOOL isUploadFailed;
@property (nonatomic) long long postSource;
@property (retain, nonatomic) NSString *twitterOAuthToken;
@property (retain, nonatomic) NSString *twitterOAuthTokenSecret;
@property (retain, nonatomic) NSString *statisticsData;
@property (retain, nonatomic) NSString *sourceUserName;
@property (retain, nonatomic) NSString *sourceNickName;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) WCLocationInfo *locationInfo;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)convert2WCUploadTask;
- (void).cxx_destruct;

@end
