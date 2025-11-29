@class NSString, NSArray, HTSLiveImage, NSNumber;

@interface IESLivePublicScreenInfoModel : NSObject <NSCoding>

@property (retain, nonatomic) NSNumber *associatedRoomID;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSNumber *publicScreenID;
@property (nonatomic) long long bindMultiTab;
@property (nonatomic) BOOL isOwner;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (copy, nonatomic) NSArray *topUserArray;
@property (retain, nonatomic) NSNumber *memberCount;
@property (retain, nonatomic) NSNumber *unreadMsgCount;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL disableLayoutService;

- (id)initWithType:(unsigned long long)a0 publicScreenID:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
