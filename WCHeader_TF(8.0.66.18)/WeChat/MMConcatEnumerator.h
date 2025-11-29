@class NSArray;

@interface MMConcatEnumerator : NSEnumerator

@property (retain, nonatomic) NSArray *enumerators;
@property (nonatomic) long long currIndex;

+ (id)concatEnumrators:(id)a0;

- (id)nextObject;
- (void).cxx_destruct;

@end
