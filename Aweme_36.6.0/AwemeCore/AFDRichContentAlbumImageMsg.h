@class NSString;

@interface AFDRichContentAlbumImageMsg : NSObject

@property (nonatomic) long long index;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
