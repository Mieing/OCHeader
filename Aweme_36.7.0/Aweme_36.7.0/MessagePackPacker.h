@interface MessagePackPacker : NSObject

+ (void)packObject:(id)a0 into:(struct msgpack_packer { void *x0; void /* function */ *x1; } *)a1;
+ (void)packNumber:(id)a0 into:(struct msgpack_packer { void *x0; void /* function */ *x1; } *)a1;
+ (id)pack:(id)a0;

@end
