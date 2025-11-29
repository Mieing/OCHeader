@class NSString, NSDictionary;

@interface BDReaderParagraphInfo : NSObject

@property (copy, nonatomic) NSString *paraId;
@property (copy, nonatomic) NSString *paraContent;
@property (nonatomic) unsigned long long paraIndex;
@property (nonatomic) unsigned long long paraType;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *paraSrcId;

- (void).cxx_destruct;

@end
