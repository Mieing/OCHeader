@class NSString;

@interface AWEPadLeftSideBarWatchHistoryLongVideoCellModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *updateAt;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *albumId;
@property (retain, nonatomic) NSString *seqTotal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
