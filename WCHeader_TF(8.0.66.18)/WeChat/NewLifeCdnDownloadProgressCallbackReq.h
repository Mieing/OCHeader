@class NSString;

@interface NewLifeCdnDownloadProgressCallbackReq : NSObject

@property (copy, nonatomic) NSString *mediaId;
@property (nonatomic) long long finishedLength;
@property (nonatomic) long long totalLength;

+ (id)makeWithMediaId:(id)a0 finishedLength:(long long)a1 totalLength:(long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
