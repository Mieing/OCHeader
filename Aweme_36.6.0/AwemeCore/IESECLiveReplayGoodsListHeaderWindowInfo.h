@class NSString;

@interface IESECLiveReplayGoodsListHeaderWindowInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long authorID;
@property (retain, nonatomic) NSString *authorName;
@property (retain, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSString *browsingTitle;
@property (retain, nonatomic) NSString *jumpURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
