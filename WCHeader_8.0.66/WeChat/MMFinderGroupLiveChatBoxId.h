@class NSString;

@interface MMFinderGroupLiveChatBoxId : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *roomUsername;

+ (id)genFinderBoxId:(id)a0;
+ (BOOL)isFinderLiveBoxId:(id)a0 equal:(id)a1;

- (id)buildFinderBoxId;
- (BOOL)isEqualToFinderLiveBoxId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
