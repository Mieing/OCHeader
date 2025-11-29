@class NSString;

@interface BDAttributionFileInfo : NSObject

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) double createTime;
@property (nonatomic) double deleteTime;
@property (nonatomic) int deleteReason;
@property (nonatomic) BOOL isUploaded;
@property (nonatomic) double firstLogTime;
@property (nonatomic) double lastLogTime;

- (void).cxx_destruct;

@end
