@class NSArray, NSString;

@interface IESLiveGiftImageTemplate : NSObject

@property (copy, nonatomic) NSArray *domains;
@property (copy, nonatomic) NSString *subUrl;

- (id)initWithTemplate:(id)a0 format:(long long)a1;
- (id)imageUrlsWithUri:(id)a0;
- (void).cxx_destruct;

@end
