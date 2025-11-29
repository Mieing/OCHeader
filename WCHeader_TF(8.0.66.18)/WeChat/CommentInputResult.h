@class NSString, NSNumber, FlutterStandardTypedData;

@interface CommentInputResult : NSObject

@property (copy, nonatomic) NSString *inputResult;
@property (retain, nonatomic) NSNumber *realIdentityType;
@property (retain, nonatomic) FlutterStandardTypedData *commentInfo;

+ (id)makeWithInputResult:(id)a0 realIdentityType:(id)a1 commentInfo:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
