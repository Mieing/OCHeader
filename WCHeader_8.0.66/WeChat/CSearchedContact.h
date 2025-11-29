@class NSString;

@interface CSearchedContact : CContact

@property (nonatomic) unsigned int matchType;
@property (retain, nonatomic) NSString *searchString;

+ (id)contactFromSearchContactResp:(id)a0 Req:(id)a1;

- (void).cxx_destruct;

@end
