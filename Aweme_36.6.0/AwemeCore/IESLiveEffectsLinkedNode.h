@class NSNumber;

@interface IESLiveEffectsLinkedNode : NSObject <NSCoding>

@property (retain, nonatomic) NSNumber *effectID;
@property (nonatomic) long long size;
@property (retain, nonatomic) IESLiveEffectsLinkedNode *preLinkedNode;
@property (retain, nonatomic) IESLiveEffectsLinkedNode *nextLinkedNode;

- (void)updateWithSize:(long long)a0;
- (id)initWithEffectID:(id)a0 size:(long long)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
