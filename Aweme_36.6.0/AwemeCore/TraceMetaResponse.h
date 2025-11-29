@class NSString;

@interface TraceMetaResponse : GPBMessage

@property (nonatomic) unsigned int resCode;
@property (nonatomic) BOOL hasResCode;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) BOOL hasErrMsg;

+ (id)descriptor;

@end
