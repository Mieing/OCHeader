@class AWEIMDouyinRedPacketUserInfo, AWEIMDouyinRedPacketModel, NSString, NSArray, AWEIMDouyinRedPacketCoverModel;
@protocol AWEIMMessageProtocol;

@interface AWEPayRPOpenRedPacketCardConfigModel : NSObject

@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverModel;
@property (retain, nonatomic) id<AWEIMMessageProtocol> message;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (nonatomic) unsigned long long productType;
@property (copy, nonatomic) NSString *rpTitle;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *ownerName;
@property (copy, nonatomic) NSString *emotionUrl;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) long long rpStatus;
@property (nonatomic) BOOL hiddenFooterView;
@property (readonly, nonatomic) BOOL sendFromMe;
@property (readonly, copy, nonatomic) NSString *footText;
@property (readonly, nonatomic) long long coverType;
@property (copy, nonatomic) id /* block */ openRedPackageBlock;
@property (copy, nonatomic) id /* block */ redirectToDetailBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (void).cxx_destruct;

@end
