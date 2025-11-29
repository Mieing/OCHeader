@class NSString;

@interface V2TXLiveMixStream : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *streamId;
@property (nonatomic) long long x;
@property (nonatomic) long long y;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) unsigned long long zOrder;
@property (nonatomic) long long inputType;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
