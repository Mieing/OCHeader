@class NSString, NSData, NSMutableArray, WCUrl;

@interface SEWCUploadMedia : NSObject <NSCoding>

@property (retain, nonatomic) NSString *serverID;
@property (retain, nonatomic) NSString *clientID;
@property (nonatomic) long long type;
@property (nonatomic) long long subType;
@property (nonatomic) long long outType;
@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) WCUrl *bufferUrl;
@property (retain, nonatomic) WCUrl *lowBandUrl;
@property (retain, nonatomic) WCUrl *bufferDataUrl;
@property (retain, nonatomic) WCUrl *lowBandDataUrl;
@property (retain, nonatomic) NSMutableArray *thumbUrlsList;
@property (nonatomic) struct CGSize { double width; double height; } imgSize;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long imageFrom;
@property (nonatomic) long long imageFilterID;
@property (nonatomic) BOOL isThumbForPrevMeida;
@property (nonatomic) BOOL isSyncToWeibo;
@property (nonatomic) BOOL isSyncToFacebook;
@property (nonatomic) BOOL isSyncToTwitter;
@property (nonatomic) BOOL isSyncToQZone;
@property (retain, nonatomic) NSString *twitterOAuthToken;
@property (retain, nonatomic) NSString *twitterOAuthTokenSecret;
@property (retain, nonatomic) NSString *userData;

- (id)init;
- (id)mediaBuffer;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
