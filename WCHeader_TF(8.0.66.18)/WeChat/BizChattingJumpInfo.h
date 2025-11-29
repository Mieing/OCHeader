@class NSString, NSNumber;

@interface BizChattingJumpInfo : NSObject

@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *openChattingFromScene;
@property (retain, nonatomic) NSNumber *chattingSubScene;
@property (retain, nonatomic) NSNumber *clickPos;
@property (retain, nonatomic) NSNumber *msgLocalId;

+ (id)makeWithUserName:(id)a0 openChattingFromScene:(id)a1 chattingSubScene:(id)a2 clickPos:(id)a3 msgLocalId:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
