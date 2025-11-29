@class NSString;

@interface IESECLiveReplayGoodsListHeaderEntry : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long entryType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL showDisclaimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
