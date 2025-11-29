@class NSNumber, NSString;

@interface IESLiveUserInteractionContext : NSObject

@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSNumber *har;
@property (retain, nonatomic) NSNumber *ohr;

- (id)initWithScene:(long long)a0 roomID:(id)a1;
- (void).cxx_destruct;

@end
