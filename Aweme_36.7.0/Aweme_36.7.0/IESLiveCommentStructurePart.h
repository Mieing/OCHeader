@class NSString;

@interface IESLiveCommentStructurePart : NSObject

@property (retain, nonatomic) id relatedModel;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *contentValue;
@property (nonatomic) long long position;
@property (nonatomic) long long length;

+ (id)initWithType:(long long)a0 conentValue:(id)a1 position:(long long)a2 length:(long long)a3;

- (void).cxx_destruct;

@end
