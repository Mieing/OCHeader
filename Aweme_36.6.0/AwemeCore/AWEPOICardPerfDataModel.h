@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEPOICardPerfDataModel : NSObject

@property (copy, nonatomic) NSString *cardKey;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) BOOL isAfterFmp;
@property (retain, nonatomic) NSMutableDictionary *sizeChangeInfo;
@property (copy, nonatomic) NSDictionary *cardInnerDetailInfo;

- (void).cxx_destruct;
- (id)init;

@end
