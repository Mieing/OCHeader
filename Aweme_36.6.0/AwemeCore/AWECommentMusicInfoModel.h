@class NSNumber, AWEMusicModel, NSString;

@interface AWECommentMusicInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *musicId;
@property (nonatomic) long long jumpType;
@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
