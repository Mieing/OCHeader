@interface ACCOption : NSObject

@property (retain, nonatomic) id maybeSome;

+ (id)maybeSome:(id)a0;
+ (id)some:(id)a0;
+ (id)none;

- (id)unwrapOrElse:(id /* block */)a0;
- (id)tryUnwrap;
- (BOOL)isSome;
- (void).cxx_destruct;
- (id)replace:(id)a0;
- (id)description;
- (id)flatMap:(id /* block */)a0;
- (id)map:(id /* block */)a0;
- (id)take;
- (id)initWith:(id)a0;
- (BOOL)isNone;
- (void)peek:(id /* block */)a0;

@end
