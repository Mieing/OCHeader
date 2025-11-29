@class NSString;

@interface _LVDraftPayloadCategory : NSObject <NSCopying>

@property (copy, nonatomic) NSString *rootPath;
@property (nonatomic) unsigned char canReplace;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSString *relationVideoGroup;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
