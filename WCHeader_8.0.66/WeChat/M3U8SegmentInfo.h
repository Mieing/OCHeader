@class NSString, NSDictionary;

@interface M3U8SegmentInfo : NSObject

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) double duration;
@property (nonatomic) long long sequenceNumber;
@property (retain, nonatomic) NSDictionary *dicXKeyParams;

- (id)description;
- (void).cxx_destruct;

@end
