@class NSString;

@interface TPDataRequestMsg : NSObject

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (nonatomic) int sequence;
@property (retain, nonatomic) NSString *fileName;

- (id)initWithStart:(long long)a0 end:(long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
