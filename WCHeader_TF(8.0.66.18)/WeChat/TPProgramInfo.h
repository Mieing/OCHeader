@class NSString;

@interface TPProgramInfo : NSObject

@property (nonatomic) BOOL actived;
@property (nonatomic) long long programId;
@property (nonatomic) long long bandwidth;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *resolution;

+ (id)programWithProgramId:(long long)a0 bandwidth:(long long)a1 resolution:(id)a2 url:(id)a3 actived:(BOOL)a4;

- (void).cxx_destruct;

@end
