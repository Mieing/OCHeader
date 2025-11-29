@class NSString;
@protocol WKURLSchemeTask;

@interface MPEmoticonSchemeTask : NSObject

@property (copy, nonatomic) NSString *md5;
@property (retain, nonatomic) id<WKURLSchemeTask> task;

- (id)initWithMD5:(id)a0 urlSchemeTask:(id)a1;
- (void).cxx_destruct;

@end
