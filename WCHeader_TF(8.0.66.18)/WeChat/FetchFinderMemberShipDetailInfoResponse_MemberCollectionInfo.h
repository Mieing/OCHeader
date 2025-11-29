@class NSData, NSMutableArray;

@interface FetchFinderMemberShipDetailInfoResponse_MemberCollectionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *collectionInfo;
@property (nonatomic) unsigned int collectionCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
