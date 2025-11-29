@class NSArray;

@interface DVETrackUIModel : NSObject

@property (copy, nonatomic) NSArray *slots;
@property (nonatomic) unsigned long long trackType;
@property (nonatomic) long long layer;

- (void).cxx_destruct;

@end
