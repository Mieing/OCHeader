@class NSString, NSData;

@interface MMCompatibleCGI : MMObject

@property (retain, nonatomic) NSString *pbUniqueID;
@property (retain, nonatomic) NSData *pbRequestData;
@property (retain, nonatomic) NSData *pbResponseData;
@property (nonatomic) unsigned int uiCgi;
@property (nonatomic) unsigned int cgiType;

- (void).cxx_destruct;

@end
