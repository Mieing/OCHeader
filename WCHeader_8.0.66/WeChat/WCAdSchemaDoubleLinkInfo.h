@class NSString, WCAdCardBtnInfo;

@interface WCAdSchemaDoubleLinkInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *doubleLinkH5Url;
@property (retain, nonatomic) NSString *doubleLinkWeAppUsername;
@property (retain, nonatomic) NSString *doubleLinkWeAppPath;
@property (nonatomic) int doubleLinkWeAppType;
@property (retain, nonatomic) WCAdCardBtnInfo *doubleLinkClickActionInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isH5InfoValid;
- (BOOL)isWeAppInfoValid;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
