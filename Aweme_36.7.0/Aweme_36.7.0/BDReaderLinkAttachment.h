@class NSString;

@interface BDReaderLinkAttachment : NSObject

@property (copy, nonatomic) NSString *linkId;
@property (copy, nonatomic) NSString *idref;
@property (retain, nonatomic) id extra;

- (void).cxx_destruct;

@end
