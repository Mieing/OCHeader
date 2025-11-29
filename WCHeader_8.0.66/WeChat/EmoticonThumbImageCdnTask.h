@class NSString;

@interface EmoticonThumbImageCdnTask : NSObject

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *savePath;
@property (copy, nonatomic) id /* block */ callback;

- (id)identifier;
- (BOOL)isValid;
- (void)endWithFail;
- (void)endWithOK:(id)a0;
- (void).cxx_destruct;

@end
