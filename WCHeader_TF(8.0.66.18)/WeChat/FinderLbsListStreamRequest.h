@class NSString, FinderLbsLocation, NSData;

@interface FinderLbsListStreamRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int lbsType;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) FinderLbsLocation *location;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int mediaType;

+ (void)initialize;

@end
