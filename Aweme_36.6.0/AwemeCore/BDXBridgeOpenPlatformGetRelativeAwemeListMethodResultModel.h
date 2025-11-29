@class NSNumber, NSString, NSArray;

@interface BDXBridgeOpenPlatformGetRelativeAwemeListMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *tagId;
@property (copy, nonatomic) NSString *seriesId;
@property (retain, nonatomic) NSArray *brifeAwemeList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
