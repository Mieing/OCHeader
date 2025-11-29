@class NSString;

@interface XPlayScreenRecordResult : NSObject <XPlayScreenRecordResult>

@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long duration;
@property (nonatomic) long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
