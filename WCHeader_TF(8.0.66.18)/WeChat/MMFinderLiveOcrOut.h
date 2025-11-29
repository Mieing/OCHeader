@class NSData;

@interface MMFinderLiveOcrOut : NSObject

@property (retain, nonatomic) NSData *result;
@property (retain, nonatomic) id userInfo;

+ (id)buildOutputWithData:(id)a0 userInfo:(id)a1;

- (void).cxx_destruct;

@end
